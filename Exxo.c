#include <stdio.h>
#include <string.h>

int main() {
    char equation[100];

    // Get equation input from the user
    printf("Enter your Equation: ");
    fgets(equation, sizeof(equation), stdin);

    // Remove the newline character at the end of the input
    equation[strcspn(equation, "\n")] = '\0';

    // Check for the specified equations
    if (strcmp(equation, "H2+He") == 0) {
        printf("H2 + He = No reaction\n");
    } else if (strcmp(equation, "H2+Li") == 0) {
        printf("H2 + Li = 2LiH\n");
    } else if (strcmp(equation, "H2+Be") == 0) {
        printf("H2 + Be = BeH2\n");
    } else if (strcmp(equation, "H2+B") == 0) {
        printf("H2 + B = 2BH3\n");
    } else if (strcmp(equation, "H2+C") == 0) {
        printf("H2 + C = CH4\n");
    } else if (strcmp(equation, "H2+N2") == 0) {
        printf("H2 + N2 = 2NH3\n");
    } else if (strcmp(equation, "H2+O2") == 0) {
        printf("H2 + O2 = 2H2O\n");
    } else if (strcmp(equation, "H2+F2") == 0) {
        printf("H2 + F2 = 2HF\n");
    }
      else if (strcmp(equation, "H2+Ne") == 0) {
        printf("H2 + Ne -> no reaction\n");
    }
      else if (strcmp(equation, "H2+Ne") == 0) {
        printf("H2 + Ne -> no reaction\n");
    }
      else if (strcmp(equation, "H2+Ne") == 0) {
        printf("H2 + Ne -> no reaction\n");
    }

      else if (strcmp(equation, "H2+Na") == 0) {
        printf("H2 + Na -> 2NaH\n");
    }
      else if (strcmp(equation, "H2+Mg") == 0) {
        printf("H2 + Mg -> MgH2\n");
    }

    else if (strcmp(equation, "H2+Al") == 0) {
        printf("H2 + Al -> AlH3\n");
    }

    else if (strcmp(equation, "H2+Si") == 0) {
        printf("H2 + Si -> no reaction\n");
    }

    else if (strcmp(equation, "H2+P") == 0) {
        printf("H2 + P -> no reaction\n");
    }

    else if (strcmp(equation, "H2+S") == 0) {
        printf("H2 + S -> H2S\n");
    }

    else if (strcmp(equation, "H2+Cl2") == 0) {
        printf("H2 + Cl2 -> 2HCl\n");
    }

    else if (strcmp(equation, "H2+Ar") == 0) {
        printf("H2 + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "H2+K") == 0) {
        printf("H2 + K -> 2KH\n");
    }

    else if (strcmp(equation, "H2+Ca") == 0) {
        printf("H2 + Ca -> CaH2\n");
    }

    else if (strcmp(equation, "H2+Sc") == 0) {
        printf("H2 + Sc -> ScH2\n");
    }

    else if (strcmp(equation, "He+H2") == 0) {
        printf("He + H2 -> no reaction\n");
    }

    else if (strcmp(equation, "He+He") == 0) {
        printf("He + He -> no reaction\n");
    }

    else if (strcmp(equation, "He+Li") == 0) {
        printf("He + Li -> no reaction\n");
    }

    else if (strcmp(equation, "He+Be") == 0) {
        printf("He + Be -> no reaction\n");
    }

    else if (strcmp(equation, "He+B") == 0) {
        printf("He + B -> no reaction\n");
    }

    else if (strcmp(equation, "He+C") == 0) {
        printf("He + C -> no reaction\n");
    }

    else if (strcmp(equation, "He+N2") == 0) {
        printf("He + N2 -> no reaction\n");
    }

    else if (strcmp(equation, "He+O2") == 0) {
        printf("He + O2 -> no reaction\n");
    }

    else if (strcmp(equation, "He+F2") == 0) {
        printf("He + F2 -> no reaction\n");
    }

    else if (strcmp(equation, "He+Ne") == 0) {
        printf("He + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "He+Na") == 0) {
        printf("He + Na -> no reaction\n");
    }

    else if (strcmp(equation, "He+Mg") == 0) {
        printf("He + Mg -> no reaction\n");
    }

    else if (strcmp(equation, "He+Al") == 0) {
        printf("He + Al -> no reaction\n");
    }

    else if (strcmp(equation, "He+Si") == 0) {
        printf("He + Si -> no reaction\n");
    }

    else if (strcmp(equation, "He+P") == 0) {
        printf("He + P -> no reaction\n");
    }

    else if (strcmp(equation, "He+S") == 0) {
        printf("He + S -> no reaction\n");
    }

    else if (strcmp(equation, "He+Cl2") == 0) {
        printf("He + Cl2 -> no reaction\n");
    }

    else if (strcmp(equation, "He+Ar") == 0) {
        printf("He + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "He+K") == 0) {
        printf("He + K -> no reaction\n");
    }

    else if (strcmp(equation, "He+Ca") == 0) {
        printf("He + Ca -> no reaction\n");
    }

    else if (strcmp(equation, "Li+H2") == 0) {
        printf("Li + H2 -> 2LiH\n");
    }

    else if (strcmp(equation, "Li+He") == 0) {
        printf("Li + He -> no reaction\n");
    }

    else if (strcmp(equation, "Li+Li") == 0) {
        printf("Li + Li -> Li2\n");
    }

    else if (strcmp(equation, "Li+Be") == 0) {
        printf("Li + Be -> LiBe\n");
    }

    else if (strcmp(equation, "Li+B") == 0) {
        printf("Li + B -> LiB\n");
    }

    else if (strcmp(equation, "Li+C") == 0) {
        printf("Li + C -> Li2C2\n");
    }

    else if (strcmp(equation, "Li+N2") == 0) {
        printf("Li + N2 -> 2Li3N\n");
    }

    else if (strcmp(equation, "Li+O2") == 0) {
        printf("Li + O2 -> 2Li2O\n");
    }

    else if (strcmp(equation, "Li+F2") == 0) {
        printf("Li + F2 -> 2LiF\n");
    }

    else if (strcmp(equation, "Li+Ne") == 0) {
        printf("Li + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "Li+Na") == 0) {
        printf("Li + Na -> no reaction\n");
    }

    else if (strcmp(equation, "Li+Mg") == 0) {
        printf("Li + Mg -> no reaction\n");
    }

    else if (strcmp(equation, "Li+Al") == 0) {
        printf("Li + Al > LiAlO2\n");
    }

    else if (strcmp(equation, "Li+Si") == 0) {
        printf("Li + Si -> LiSi\n");
    }

    else if (strcmp(equation, "Li + P") == 0) {
        printf("Li + P -> Li3P\n");
    }

    else if (strcmp(equation, "Li+S") == 0) {
        printf("Li + S -> Li2S\n");
    }

    else if (strcmp(equation, "Li+Cl2") == 0) {
        printf("Li + Cl2 -> 2LiCl\n");
    }

    else if (strcmp(equation, "Li+Ar") == 0) {
        printf("Li + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "Li+K") == 0) {
        printf("Li + K -> no reaction\n");
    }

    else if (strcmp(equation, "Li+Ca") == 0) {
        printf("Li + Ca -> no reaction\n");
    }

    else if (strcmp(equation, "Be+H") == 0) {
        printf("Be + H -> BeH2\n");
    }

    else if (strcmp(equation, "Be+He") == 0) {
        printf("Be + He -> no reaction\n");
    }

    else if (strcmp(equation, "Be+Li") == 0) {
        printf("Be + Li -> LiBe\n");
    }

    else if (strcmp(equation, "Be+B") == 0) {
        printf("Be + B -> Be2B\n");
    }

    else if (strcmp(equation, "Be+C") == 0) {
        printf("Be + C -> Be2C\n");
    }

    else if (strcmp(equation, "Be+N2") == 0) {
        printf("Be + N2 -> Be3N2\n");
    }

    else if (strcmp(equation, "Be+O2") == 0) {
        printf("Be + O2 -> 2BeO\n");
    }

    else if (strcmp(equation, "Be+F2") == 0) {
        printf("Be + F2 -> BeF2\n");
    }

    else if (strcmp(equation, "Be+Ne") == 0) {
        printf("Be + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "Be+Na") == 0) {
        printf("Be + Na -> no reaction\n");
    }

    else if (strcmp(equation, "Be+Mg") == 0) {
        printf("Be + Mg -> no reaction\n");
    }

    else if (strcmp(equation, "Be+Al") == 0) {
        printf("Be + Al -> no reaction\n");
    }

    else if (strcmp(equation, "Be+Si") == 0) {
        printf("Be + Si -> Be2Si\n");
    }

    else if (strcmp(equation, "Be+P") == 0) {
        printf("Be + P -> Be3P2\n");
    }

    else if (strcmp(equation, "Be+S") == 0) {
        printf("Be + S -> BeS\n");
    }

    else if (strcmp(equation, "Be+Cl") == 0) {
        printf("Be + Cl -> BeCl2\n");
    }

    else if (strcmp(equation, "Be+Ar") == 0) {
        printf("Be + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "Be+K") == 0) {
        printf("Be + K -> no reaction\n");
    }

    else if (strcmp(equation, "Be+Ca") == 0) {
        printf("Be + Ca -> no reaction\n");
    }

    else if (strcmp(equation, "B+H2") == 0) {
        printf("B + H2 -> BH3\n");
    }

    else if (strcmp(equation, "B+He") == 0) {
        printf("B + He -> no reaction\n");
    }

    else if (strcmp(equation, "B+Li") == 0) {
        printf("B + Li -> LiB\n");
    }

    else if (strcmp(equation, "B+Be") == 0) {
        printf("B + Be -> Be2B\n");
    }

    else if (strcmp(equation, "B+B") == 0) {
        printf("B + B -> B2\n");
    }

    else if (strcmp(equation, "B+C") == 0) {
        printf("B + C -> B4C\n");
    }

    else if (strcmp(equation, "B+N2") == 0) {
        printf("B + N2 -> 2BN\n");
    }

    else if (strcmp(equation, "B+O2") == 0) {
        printf("B + O2 -> 2B2O3\n");
    }

    else if (strcmp(equation, "B+F2") == 0) {
        printf("B + F2 -> 2BF\n");
    }

    else if (strcmp(equation, "B+Ne") == 0) {
        printf("B + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "B+Na") == 0) {
        printf("B + Na -> no reaction\n");
    }

    else if (strcmp(equation, "B+Mg") == 0) {
        printf("B + Mg -> no reaction\n");
    }

    else if (strcmp(equation, "B+Al") == 0) {
        printf("B + Al -> AlB2\n");
    }
    else if (strcmp(equation, "B+Si") == 0) {
        printf("B + Si -> SiB3\n");
    }

    else if (strcmp(equation, "B+P") == 0) {
        printf("B + P -> BP\n");
    }

    else if (strcmp(equation, "B+S") == 0) {
        printf("B + S -> B2S3\n");
    }

    else if (strcmp(equation, "B+Cl2") == 0) {
        printf("B + Cl2 -> 2BCl3\n");
    }

    else if (strcmp(equation, "B+Ar") == 0) {
        printf("B + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "B+K") == 0) {
        printf("B + K -> no reaction\n");
    }

    else if (strcmp(equation, "C+H") == 0) {
        printf("C + H -> CH4\n");
    }

    else if (strcmp(equation, "C+He") == 0) {
        printf("C + He -> no reaction\n");
    }

    else if (strcmp(equation, "C+Li") == 0) {
        printf("C + Li -> Li2C2\n");
    }

    else if (strcmp(equation, "C+Be") == 0) {
        printf("C + Be -> Be2C\n");
    }
    else if (strcmp(equation, "C+B") == 0) {
        printf("C + B -> B4C\n");
    }

    else if (strcmp(equation, "C+C") == 0) {
        printf("C + C -> C2\n");
    }

    else if (strcmp(equation, "C+N2") == 0) {
        printf("C + N2 -> C2N2\n");
    }

    else if (strcmp(equation, "C+O2") == 0) {
        printf("C+ O2 -> CO2\n");
    }

    else if (strcmp(equation, "C+F2") == 0) {
        printf("C + F2 -> CF4\n");
    }

    else if (strcmp(equation, "C+Ne") == 0) {
        printf("C + Ne > no reaction\n");
    }

    else if (strcmp(equation, "C+Na") == 0) {
        printf("C + Na -> no reaction\n");
    }

    else if (strcmp(equation, "C+Mg") == 0) {
        printf("C + Mg -> no reaction\n");
    }

    else if (strcmp(equation, "C+Al") == 0) {
        printf("C + Al -> Al4C3\n");
    }

    else if (strcmp(equation, "C+Si") == 0) {
        printf("C + Si -> SiC\n");
    }

    else if (strcmp(equation, "C+P") == 0) {
        printf("C + P -> no reaction\n");
    }
    else if (strcmp(equation, "C+S") == 0) {
        printf("C + S -> CS2\n");
    }

    else if (strcmp(equation, "C+Cl") == 0) {
        printf("C + Cl -> no reaction\n");
    }

    else if (strcmp(equation, "C+Ar") == 0) {
        printf("C + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "C+K") == 0) {
        printf("C + K -> KC2\n");
    }

    else if (strcmp(equation, "C+Ca") == 0) {
        printf("C + Ca -> no reaction\n");
    }

    else if (strcmp(equation, "N2+H2") == 0) {
        printf("N2 + H2 -> 2NH3\n");
    }

    else if (strcmp(equation, "N2+He") == 0) {
        printf("N2 + He -> no reaction\n");
    }

    else if (strcmp(equation, "N2+Li") == 0) {
        printf("N2 + Li -> 2Li3N\n");
    }

    else if (strcmp(equation, "N2+Be") == 0) {
        printf("N2 + Be -> Be3N2\n");
    }

    else if (strcmp(equation, "N2 + B") == 0) {
        printf("N2 + B -> 2BN\n");
    }

    else if (strcmp(equation, "N2+C") == 0) {
        printf("N2 + C -> C2N2\n");
    }

    else if (strcmp(equation, "N2+N2") == 0) {
        printf("N2 + N2 -> no reaction\n");
    }

    else if (strcmp(equation, "N2+O2") == 0) {
        printf("N2 + O2 -> 2NO2\n");
    }

    else if (strcmp(equation, "N2+F2") == 0) {
        printf("N2 + F2 -> 2NF3\n");
    }

    else if (strcmp(equation, "N2+Ne") == 0) {
        printf("N2 + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "N2+Na") == 0) {
        printf("N2 + Na -> no reaction\n");
    }

    else if (strcmp(equation, "N2+Mg") == 0) {
        printf("N2 + Mg -> MgN2\n");
    }

    else if (strcmp(equation, "N2+Al") == 0) {
        printf("N2 + Al -> 2AlN\n");
    }

    else if (strcmp(equation, "N2+Si") == 0) {
        printf("N2 + Si -> Si3N4\n");
    }

    else if (strcmp(equation, "N2+P") == 0) {
        printf("N2 + P -> no reaction\n");
    }

    else if (strcmp(equation, "N2+S") == 0) {
        printf("N2 + S -> 2NS\n");
    }
    else if (strcmp(equation, "N2+Cl2") == 0) {
        printf("N2 + Cl2 -> 2NCl3\n");
    }

    else if (strcmp(equation, "N2+Ar") == 0) {
        printf("N2 + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "N2+K") == 0) {
        printf("N2 + K -> 2K3N\n");
    }
    else if (strcmp(equation, "N2+Ca") == 0) {
        printf("N2 + Ca -> Ca3N2\n");
    }

    else if (strcmp(equation, "O2+H2") == 0) {
        printf("O2 + H2 -> 2H2O\n");
    }

    else if (strcmp(equation, "O2+He") == 0) {
        printf("O2 + He -> no reaction\n");
    }

    else if (strcmp(equation, "O2+Li") == 0) {
        printf("O2 + Li -> 2Li2O\n");
    }

    else if (strcmp(equation, "O2+Be") == 0) {
        printf("O2 + Be -> 2BeO\n");
    }

    else if (strcmp(equation, "O2+B") == 0) {
        printf("O2 + B -> 2B2O3\n");
    }

    else if (strcmp(equation, "O2+C") == 0) {
        printf("O2 + C -> CO2\n");
    }

    else if (strcmp(equation, "O2+N2") == 0) {
        printf("O2 + N2 -> 2NO2\n");
    }

    else if (strcmp(equation, "O2+F2") == 0) {
        printf("O2 + F2 -> 2OF2\n");
    }

    else if (strcmp(equation, "O2+Ne") == 0) {
        printf("O2 + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "O2+Na") == 0) {
        printf("O2 + Na -> 2Na2O\n");
    }

    else if (strcmp(equation, "O2+Mg") == 0) {
        printf("O2 + Mg -> 2MgO\n");
    }

    else if (strcmp(equation, "O2+Al") == 0) {
        printf("O2 + Al -> 2Al2O3\n");
    }

    else if (strcmp(equation, "O2+Si") == 0) {
        printf("O2 + Si -> SiO2\n");
    }

    else if (strcmp(equation, "O2+P") == 0) {
        printf("O2 + P -> 2P2O5\n");
    }

    else if (strcmp(equation, "O2+S") == 0) {
        printf("O2 + S -> SO2\n");
    }

    else if (strcmp(equation, "O2+Cl2") == 0) {
        printf("O2 + Cl2 -> 2Cl2O7\n");
    }

    else if (strcmp(equation, "O2+Ar") == 0) {
        printf("O2 + Ar -> no reaction\n");
    }
    else if (strcmp(equation, "O2+K") == 0) {
        printf("O2 + K -> 2K2O\n");
    }

    else if (strcmp(equation, "O2+Ca") == 0) {
        printf("O2 + Ca -> 2CaO\n");
    }

    else if (strcmp(equation, "F2+H2") == 0) {
        printf("F2 + H2 -> 2HF\n");
    }

    else if (strcmp(equation, "F2+He") == 0) {
        printf("F2 + He -> no reaction\n");
    }

    else if (strcmp(equation, "F2+Li") == 0) {
        printf("F2 + Li -> 2LiF\n");
    }

    else if (strcmp(equation, "F2+Be") == 0) {
        printf("F2 + Be -> no reaction\n");
    }

    else if (strcmp(equation, "F2+B") == 0) {
        printf("F2 + B -> BeF2\n");
    }

    else if (strcmp(equation, "F2+C") == 0) {
        printf("F2 + C -> CF4\n");
    }

    else if (strcmp(equation, "F2+N2") == 0) {
        printf("F2 + N2 -> 2NF3\n");
    }

    else if (strcmp(equation, "F2+O2") == 0) {
        printf("F2 + O2 -> 2OF2\n");
    }

    else if (strcmp(equation, "F2+Ne") == 0) {
        printf("F2 + Ne -> no reaction\n");
    }

    else if (strcmp(equation, "F2+Na") == 0) {
        printf("F2 + Na -> 2NaF\n");
    }

    else if (strcmp(equation, "F2+Mg") == 0) {
        printf("F2 + Mg -> MgF2\n");
    }

    else if (strcmp(equation, "F2+Al") == 0) {
        printf("F2 + Al -> 2AlF3\n");
    }

    else if (strcmp(equation, "F2+Si") == 0) {
        printf("F2 + Si -> SiF4\n");
    }

    else if (strcmp(equation, "F2+P") == 0) {
        printf("F2 + P -> 4PF3\n");
    }

    else if (strcmp(equation, "F2+S") == 0) {
        printf("F2 + S -> SF6\n");
    }

    else if (strcmp(equation, "F2+Cl2") == 0) {
        printf("F2 + Cl2 -> 2ClF\n");
    }

    else if (strcmp(equation, "F2+Ar") == 0) {
        printf("F2 + Ar -> no reaction\n");
    }

    else if (strcmp(equation, "F2+K") == 0) {
        printf("F2 + K -> 2KF\n");
    }

    else if (strcmp(equation, "F2+Ca") == 0) {
        printf("F2 + Ca -> CaF2\n");
    }
    else if (strcmp(equation, "Ne+H2") == 0) {
        printf("Ne + H2 -> no reaction\n");
    }

    else if (strcmp(equation, "Ne+He") == 0) {
        printf("Ne + He -> no reaction\n");
    }

    else {
        printf("Equation not recognized.\n");
    }

    return 0;
}

