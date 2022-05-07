#ifndef __RECT_HPP__
#define __RECT_HPP__
    class persegiPanjang{
        private:
            float x_max, x_min, y_max, y_min;
        public:
            persegiPanjang(float midpoint_x, float midpoint_y, float length, float width);
            bool operator== (persegiPanjang const &)const;
            persegiPanjang operator+ (persegiPanjang const &);
            persegiPanjang operator- (persegiPanjang const &);
            void operator++ ();
            void operator++(int);
            void operator-- ();
            void operator--(int);
            float operator[](int pilihan);
            void output();
            
    };
#endif