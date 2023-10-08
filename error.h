

#define ERROR_LEX_ANALYSIS  1   /// chyba v programu v ramci lexikalni analyzy (chybna struktura aktualniho lexemu).
#define ERROR_SYNT_ANALYSIS 2   /// chyba v programu v ramci syntakticke analyzy (chybna syntaxe programu, chybejici hlavicka, atp.).
#define ERROR_UNDEF         3   /// semanticke chyba v programu – nedefinovana funkce, redefinice promenne.
#define ERROR_PARAM         4   /// semanticka chyba v programu – spatny pocet/typ parametru u volani funkce ci s patny typ navratove hodnoty z funkce.
#define ERROR_NOT_INIT      5   /// semanticka chyba v programu – pouziti nedefinovane nebo neinicializovane promenne
#define ERROR_RETURN        6   /// semanticka chyba v programu – chybejici/prebyvajici vyraz v prikazu navratu z funkce.
#define ERROR_EXPR          7   /// semanticka chyba typove kompatibility v aritmetickych, retezcovych a relacnich vyrazech.
#define ERROR_PARAM_TYPE    8   /// semanticka chyba odvozeni typu – typ promenne nebo parametru neni uveden a nelze odvodit od pouziteho vyrazu.
#define ERROR_OTHER         9   /// ostatni semanticke chyby
#define ERROR_INTERNAL      99  /// interni chyba prekladace tj. neovlivnena vstupnim programem (napr. chyba alokace pameti atd.).