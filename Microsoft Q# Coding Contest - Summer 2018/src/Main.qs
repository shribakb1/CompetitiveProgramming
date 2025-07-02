namespace Solution {
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Diagnostics;

    operation Solve(qs : Qubit[]) : Unit {
        for q in qs {
            H(q);
        }
    }

    @EntryPoint()
    operation Main() : Unit {
        use qs = Qubit[3];

        Solve(qs);

        Message("Після виклику Solve (Hadamard на всіх кубітах):");
        DumpMachine();

        ResetAll(qs);
    }
}
