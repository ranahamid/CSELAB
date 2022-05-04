library verilog;
use verilog.vl_types.all;
entity ORgate is
    port(
        c               : out    vl_logic;
        a               : in     vl_logic;
        b               : in     vl_logic
    );
end ORgate;
