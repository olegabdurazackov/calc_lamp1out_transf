# Calculate lamp out transfomator

# Расчет выходных однотактных трансформаторов.

       float nu; // КПД трансформатора
        float Ri; // внутреннее сопротивление лампы, Ом
        float Ra; // сопротивление нагрузки на аноде, Ом
        float r1;     // активное сопротивление первичной обмотки, Ом
        float I0; // ток покоя каскада, А
        float Rn;   //сопротивление нагрузки, Ом
        float F_low; // частота среза снизу, Гц
        float A;  // коэф. распределения между обмотками
        int level; // уровень среза по частоте: -1 или -3

###  /*размеры сердечника трансформатора*/
        float a; // ширина средней части пластин Ш
        float c;  //ширина окна
        float h; // высота окна
        float b;  // толщшина набора
        float lc;   // средняя длина магнитной силовой линии
        float lo;   // расчетная средняя длина витка
        bool  is_hot_steel; // горячекатанная сталь
        float Ks; // коэф.заполнения сердечника железом
        float Kok;// коэф.заполнения окна медью

###  /* выходные данные */
        /* условия применимости даннного  железа есть выполнение соотношения
         * tau_el <= tau_ konstr
         * ***********************************/
        float tau_el; /* электрическая постоянная времени транса */
        float tau_konstr;
        int N1; // число витков первичной обмотки
        int N2; // число витков вторичной обмотки
        float d1,d2; // диаметры проводов первичной и вторичной обмоток,мм
        float delta; // зазор в сердечнике
        float Sc; /* площадь сечения керна сердечника, см2 */
        float So; /* площадь сечения окна сердечника, см2 */
        float n2; /* квадрат коэффициента трансформации */
        float aw0; /* степень nодмагничивания */
        float r2; /* активное сопротивление вторичной обмотки */

        /* эквивалентное сопротивление выходного каскада на трансе */
        float R_equiv;
        float L1; /* требуемая индуктивность nерв. обмотки */

        /* mu -- магнитная nроницаемость сердечника с nодмагничиванием,
         *  выполненного с зазором,
         *  для начального рассчета nринимаем за 250 
         *   в дальшейшем будет корректироваться
         * ****************  */
 
