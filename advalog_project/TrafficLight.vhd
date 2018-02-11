----------------------------------------------------------------------------------
-- 
-- Create Date:    19:05:11 01/30/2018 
-- Design Name:    
-- Module Name:    TrafficLight - Behavioral 
-- Project Name:   Advalog_Project
-- Target Devices: Traffic Lights
-- Tool versions: 
-- Description:    This project simulates the behavior of an actual traffic light that is timer based
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Entity_TrafficLight is
    Port ( clk : in  STD_LOGIC;
           clr : in  STD_LOGIC;
           light : out  STD_LOGIC_VECTOR (5 downto 0));
end Entity_TrafficLight;

architecture Arch_TrafficLight of Entity_TrafficLight is
type state_type is (s0, s1, s2, s3, s4, s5); -- Creates 6 states for the traffic light
signal state: state_type; 
signal count: STD_LOGIC_VECTOR(3 downto 0);
constant SEC5: STD_LOGIC_VECTOR(3 downto 0) := "1111";
constant SEC1: STD_LOGIC_VECTOR(3 downto 0) := "0011"; 

begin

process(clk,clr) 
begin
	if clr = '1' then 
						state <= s0;
						count <= X"0";
	elsif clk'event and clk = '1' then 
		case state is 
			when s0 => 
				if count < SEC5 then
					state <= s0;
					count <= count + 1;
				else
					state <= s1;
					count <= X"0";
				end if;
			when s1 =>
				if count < SEC1 then
					state <= s1;
					count <= count + 1;
				else
					state <= s2;
					count <= X"0";
				end if;
			when s2 => 
				if count < SEC1 then
					state <= s2;
					count <= count + 1;
				else
					state <= s3;
					count <= X"0";
				end if;
			when s3 =>
				if count < SEC5 then
					state <= s3;
					count <= count + 1;
				else
					state <= s4;
					count <= X"0";
				end if;
			when s4 =>
				if count < SEC1 then
					state <= s4;
					count <= count + 1;
				else state <= s5;
					state <= s5;
					count <= X"0";
				end if;
			when s5 =>
				if count < SEC1 then
					state <= s5;
					count <= count + 1;
				else
					state <= s0;
					count <= X"0";
				end if;
			when others =>
					state <= s0;
		end case;
	end if;
end process;

C2: process(state)
begin
case state is
	when s0 => light <= "100001"; -- traffic light 1: red traffic light 2: green
	when s1 => light <= "100010"; --                  red                  yellow
	when s2 => light <= "100100"; --                  red                  red
	when s3 => light <= "001100"; --                  green                red
	when s4 => light <= "010100"; --                  yellow               red
	when s5 => light <= "100100"; --                  red                  red
end case;
end process;
	
end Arch_TrafficLight;

