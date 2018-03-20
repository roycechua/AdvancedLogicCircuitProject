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
			  tf : in STD_LOGIC_VECTOR (3 downto 0);
           light : out  STD_LOGIC_VECTOR (2 downto 0));
end Entity_TrafficLight;

architecture Arch_TrafficLight of Entity_TrafficLight is
type state_type is (s0, s1, s2, s3, s4, s5); -- Creates 6 states for the traffic light
signal state: state_type; 
signal count: integer := 0;
constant SEC30: integer := 405000000;
constant SEC15: integer := 202500000;
constant SEC1: integer := 13500000;
begin

process(clk,clr) 
begin
	if clr = '1' then 
						state <= s0;
						count <= 0;
	elsif clk'event and clk = '1' then 
		case state is 
			when s0 => 
				if count < SEC30 then
					state <= s0;
					count <= count + 1;
				else
					state <= s1;
					count <= 0;
				end if;
			when s1 =>
				if count < SEC1 then
					state <= s1;
					count <= count + 1;
				else
					state <= s2;
					count <= 0;
				end if;
			when s2 => 
				if count < SEC15 then
					state <= s2;
					count <= count + 1;
				else
					state <= s3;
					count <= 0;
				end if;
			when s3 =>
				if count < SEC30 then
					state <= s3;
					count <= count + 1;
				else
					state <= s4;
					count <= 0;
				end if;
			when s4 =>
				if count < SEC1 then
					state <= s4;
					count <= count + 1;
				else state <= s5;
					state <= s5;
					count <= 0;
				end if;
			when s5 =>
				if count < SEC1 then
					state <= s5;
					count <= count + 1;
				else
					state <= s0;
					count <= 0;
				end if;
			when others =>
					state <= s0;
		end case;
	end if;
end process;

C2: process(state,tf)
begin
--case state is
--	when s0 => light <= "10010000101"; -- traffic light 1: red traffic light 2: green
--	when s1 => light <= "01001000101"; --                  red                  yellow
--	when s2 => light <= "00100100110"; --                  red                  red
--	when s3 => light <= "00100110001"; --                  green                red
--	when s4 => light <= "00100101001"; --                  yellow               red
--	when s5 => light <= "00100100101"; --                  red                  red
if state = s0 then
	case tf is
		when "1000" => light <= "100";
		when "0100" => light <= "100";
		when "0010" => light <= "001";
		when "0001" => light <= "001";
		when others => light <= "000";
	end case;
elsif state = s1 then
	case tf is
		when "1000" => light <= "010";
		when "0100" => light <= "010";
		when "0010" => light <= "001";
		when "0001" => light <= "001";
		when others => light <= "000";
	end case;
elsif state = s2 then
	case tf is
		when "1000" => light <= "001";
		when "0100" => light <= "001";
		when "0010" => light <= "001";
		when "0001" => light <= "100";
		when others => light <= "000";
	end case;
elsif state = s3 then
	case tf is
		when "1000" => light <= "001";
		when "0100" => light <= "001";
		when "0010" => light <= "100";
		when "0001" => light <= "001";
		when others => light <= "000";
	end case;
elsif state = s4 then
	case tf is
		when "1000" => light <= "001";
		when "0100" => light <= "001";
		when "0010" => light <= "010";
		when "0001" => light <= "001";
		when others => light <= "000";
	end case;
else 
	case tf is
		when "1000" => light <= "001";
		when "0100" => light <= "001";
		when "0010" => light <= "001";
		when "0001" => light <= "001";
		when others => light <= "000";
		end case;
end if;
--TL1     TL2     TL3     TL1.1	Delay
--Green	 Green	Red     Red		30
--Yellow	 Yellow	Red     Red		1
--Red	    Red     Red     Green	15
--Red	    Red     Green   Red		30
--Red	    Red     Yellow  Red		1
--Red	    Red     Red	  Red		1



end process;
	
end Arch_TrafficLight;

