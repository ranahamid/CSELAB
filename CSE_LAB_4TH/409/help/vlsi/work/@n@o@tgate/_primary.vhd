library verilog;
use verilog.vl_types.all;
entity NOTgate is
    port(
        b               : out    vl_logic;
        a               : in     vl_logic
    );
end NOTgate;
