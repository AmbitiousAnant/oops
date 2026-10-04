class Distance{
    float metres;
    public:
    Distance(float m):metres(m){}]
    void show(){
        cout<<metres<<" m";
    }
};
void printDistance(Distance d){
    d.show();
}