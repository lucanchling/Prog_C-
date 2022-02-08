#include <vector>
#include <iostream>

struct color
{
    //couleur r,g,b
    int r,g,b;
    //constructeurs
    color()
    :r(0),g(0),b(0)
    {}
    color(int r_arg,int g_arg,int b_arg)
    :r(r_arg),g(g_arg),b(b_arg)
    {}
};

struct image
{
    //taille
    int Nx,Ny;
    //donnees
    std::vector<color> data;

    void assert_coord(int x,int y) const
    {
        if(x<0 || x>=Nx || y<0 || y>=Ny)
        {
            std::cerr<<"Index "<<x<<","<<y<<" hors bornes."<<std::endl;
            exit(1);
        }
    }
    
    color const& operator()(int x,int y) const
    {
        assert_coord(x,y);
        return data[y+Ny*x];
    }
    
    color& operator()(int x,int y)
    {
        assert_coord(x,y);
        return data[y+Ny*x];
    }

    void resize(int Nx,int Ny){
        data.resize(Nx);

        std::for_each( data.begin(), data.end(), 
                   std::bind2nd( std::mem_fun_ref( &std::vector<char>::resize ), Ny ) );

    }
};

std::ostream& operator<<(std::ostream& stream,const color& c)
{
    stream<<c.r<<" "<<c.g<<" "<<c.b<<"\n";
    return stream;
}

int main(){
    color c(255,0,0);
    std::cout<<c;

    image im;
    // im.resize(3,2);
    // im(0,0)=color(255,0,0);
    // im(1,0)=color(0,255,0);
    // im(2,0)=color(0,0,255);
    // im(0,1)=color(255,255,0);
    // im(1,1)=color(0,255,255);
    // im(2,1)=color(255,0,255);
    // std::cout<<im(0,1)<<std::endl;
    
    return 0;
}