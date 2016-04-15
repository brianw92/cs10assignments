{"filter":false,"title":"IntVector.h","tooltip":"/cs012_assignments/assignment05/IntVector.h","undoManager":{"stack":[[{"start":{"row":0,"column":0},"end":{"row":36,"column":6},"action":"insert","lines":["#ifndef __DISTANCE_H__","#define __DISTANCE_H__","","class IntVector","{","    private:","        unsigned sz;","        unsigned cap;","        int *data;","        ","    ","    public:","        IntVector();","        IntVector(unsigned size);","        IntVector(unsigned size, int value);","        ~IntVector();","        unsigned size() const;","        unsigned capacity() const;","        bool empty() const;","        const int &at(unsigned index) const;","        int &at(unsigned index);","        void insert(unsigned index, int value);","        void erase(unsigned index);","        const int &front() const;","        int &front();","        const int &back() const;","        int &back();","        void assign(unsigned n, int value);","        void push_back(int value);","        void pop_back();","        void clear();","        void resize(unsigned size);","        void resize(unsigned size, int value);","        void reserve(unsigned n);    // PRIVATE HELPER FUNCTIONS?","};","","#endif"],"id":1}],[{"start":{"row":8,"column":18},"end":{"row":9,"column":0},"action":"insert","lines":["",""],"id":2},{"start":{"row":9,"column":0},"end":{"row":9,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"insert","lines":["v"],"id":3}],[{"start":{"row":9,"column":9},"end":{"row":9,"column":10},"action":"insert","lines":["o"],"id":4}],[{"start":{"row":9,"column":10},"end":{"row":9,"column":11},"action":"insert","lines":["i"],"id":5}],[{"start":{"row":9,"column":11},"end":{"row":9,"column":12},"action":"insert","lines":["d"],"id":6}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":["e"],"id":8}],[{"start":{"row":9,"column":14},"end":{"row":9,"column":15},"action":"insert","lines":["x"],"id":9}],[{"start":{"row":9,"column":15},"end":{"row":9,"column":16},"action":"insert","lines":["p"],"id":10}],[{"start":{"row":9,"column":16},"end":{"row":9,"column":17},"action":"insert","lines":["a"],"id":11}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"insert","lines":["n"],"id":12}],[{"start":{"row":9,"column":18},"end":{"row":9,"column":19},"action":"insert","lines":["d"],"id":13}],[{"start":{"row":9,"column":19},"end":{"row":9,"column":21},"action":"insert","lines":["()"],"id":14}],[{"start":{"row":9,"column":21},"end":{"row":9,"column":22},"action":"insert","lines":[";"],"id":15}],[{"start":{"row":9,"column":22},"end":{"row":10,"column":0},"action":"insert","lines":["",""],"id":16},{"start":{"row":10,"column":0},"end":{"row":10,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":10,"column":8},"end":{"row":10,"column":9},"action":"insert","lines":["v"],"id":17}],[{"start":{"row":10,"column":9},"end":{"row":10,"column":10},"action":"insert","lines":["o"],"id":18}],[{"start":{"row":10,"column":10},"end":{"row":10,"column":11},"action":"insert","lines":["i"],"id":19}],[{"start":{"row":10,"column":11},"end":{"row":10,"column":12},"action":"insert","lines":["d"],"id":20}],[{"start":{"row":10,"column":12},"end":{"row":10,"column":13},"action":"insert","lines":[" "],"id":21}],[{"start":{"row":10,"column":13},"end":{"row":10,"column":14},"action":"insert","lines":["e"],"id":22}],[{"start":{"row":10,"column":14},"end":{"row":10,"column":15},"action":"insert","lines":["x"],"id":23}],[{"start":{"row":10,"column":15},"end":{"row":10,"column":16},"action":"insert","lines":["p"],"id":24}],[{"start":{"row":10,"column":16},"end":{"row":10,"column":17},"action":"insert","lines":["a"],"id":25}],[{"start":{"row":10,"column":17},"end":{"row":10,"column":18},"action":"insert","lines":["n"],"id":26}],[{"start":{"row":10,"column":18},"end":{"row":10,"column":19},"action":"insert","lines":["d"],"id":27}],[{"start":{"row":10,"column":19},"end":{"row":10,"column":21},"action":"insert","lines":["()"],"id":28}],[{"start":{"row":10,"column":20},"end":{"row":10,"column":21},"action":"insert","lines":["u"],"id":29}],[{"start":{"row":10,"column":21},"end":{"row":10,"column":22},"action":"insert","lines":["n"],"id":30}],[{"start":{"row":10,"column":22},"end":{"row":10,"column":23},"action":"insert","lines":["s"],"id":31}],[{"start":{"row":10,"column":23},"end":{"row":10,"column":24},"action":"insert","lines":["i"],"id":32}],[{"start":{"row":10,"column":24},"end":{"row":10,"column":25},"action":"insert","lines":["n"],"id":33}],[{"start":{"row":10,"column":24},"end":{"row":10,"column":25},"action":"remove","lines":["n"],"id":34}],[{"start":{"row":10,"column":24},"end":{"row":10,"column":25},"action":"insert","lines":["g"],"id":35}],[{"start":{"row":10,"column":25},"end":{"row":10,"column":26},"action":"insert","lines":["n"],"id":36}],[{"start":{"row":10,"column":26},"end":{"row":10,"column":27},"action":"insert","lines":["e"],"id":37}],[{"start":{"row":10,"column":27},"end":{"row":10,"column":28},"action":"insert","lines":["d"],"id":38}],[{"start":{"row":10,"column":28},"end":{"row":10,"column":29},"action":"insert","lines":[" "],"id":39}],[{"start":{"row":10,"column":29},"end":{"row":10,"column":30},"action":"insert","lines":["n"],"id":40}],[{"start":{"row":10,"column":31},"end":{"row":10,"column":32},"action":"insert","lines":[";"],"id":41}],[{"start":{"row":10,"column":29},"end":{"row":10,"column":30},"action":"remove","lines":["n"],"id":42}],[{"start":{"row":10,"column":29},"end":{"row":10,"column":30},"action":"insert","lines":["a"],"id":43}],[{"start":{"row":10,"column":30},"end":{"row":10,"column":31},"action":"insert","lines":["m"],"id":44}],[{"start":{"row":10,"column":31},"end":{"row":10,"column":32},"action":"insert","lines":["o"],"id":45}],[{"start":{"row":10,"column":32},"end":{"row":10,"column":33},"action":"insert","lines":["u"],"id":46}],[{"start":{"row":10,"column":33},"end":{"row":10,"column":34},"action":"insert","lines":["n"],"id":47}],[{"start":{"row":10,"column":34},"end":{"row":10,"column":35},"action":"insert","lines":["t"],"id":48}],[{"start":{"row":35,"column":37},"end":{"row":35,"column":65},"action":"remove","lines":["// PRIVATE HELPER FUNCTIONS?"],"id":49}],[{"start":{"row":35,"column":36},"end":{"row":35,"column":37},"action":"remove","lines":[" "],"id":50}],[{"start":{"row":35,"column":35},"end":{"row":35,"column":36},"action":"remove","lines":[" "],"id":51}],[{"start":{"row":35,"column":34},"end":{"row":35,"column":35},"action":"remove","lines":[" "],"id":52}],[{"start":{"row":35,"column":33},"end":{"row":35,"column":34},"action":"remove","lines":[" "],"id":53}],[{"start":{"row":11,"column":4},"end":{"row":11,"column":8},"action":"remove","lines":["    "],"id":54}],[{"start":{"row":11,"column":0},"end":{"row":11,"column":4},"action":"remove","lines":["    "],"id":55}],[{"start":{"row":10,"column":37},"end":{"row":11,"column":0},"action":"remove","lines":["",""],"id":56}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":57}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":58}],[{"start":{"row":0,"column":0},"end":{"row":17,"column":60},"action":"insert","lines":["//  =============== BEGIN ASSESSMENT HEADER ================","/// @file assn<05>/IntVector.cpp","/// @brief Assignment/Lab <05> for CS 12 <Spring 2015>","///","/// @author <Brian Wong> [bwong012@ucr.edu]","/// @date <May 12, 2015>","///","/// @par Enrollment Notes ","///     Lecture Section: <001>","/// @par","///     Lab Section: <021>","/// @par","///     TA: <Anthony>","///","/// @par Plagiarism Section","/// I hereby certify that the code in this file","/// is ENTIRELY my own original work.","//  ================== END ASSESSMENT HEADER ==============="],"id":59}],[{"start":{"row":1,"column":31},"end":{"row":1,"column":32},"action":"remove","lines":["p"],"id":60}],[{"start":{"row":1,"column":30},"end":{"row":1,"column":31},"action":"remove","lines":["p"],"id":61}],[{"start":{"row":1,"column":29},"end":{"row":1,"column":30},"action":"remove","lines":["c"],"id":62}],[{"start":{"row":1,"column":29},"end":{"row":1,"column":30},"action":"insert","lines":["h"],"id":63}]],"mark":62,"position":62},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":19,"column":22},"end":{"row":19,"column":22},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1431458291458,"hash":"e9e47f82b54ab36d29a3e7870a0317b2562dbf7a"}