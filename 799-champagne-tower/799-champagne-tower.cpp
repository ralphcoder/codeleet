class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        
        vector< vector< double > > water(query_row + 2 , vector<double> (query_row + 2 , 0.0 )) ;
        water[0][0] = poured ;
        
        for(int i=0; i<=query_row ; i++)
        {
             for(int j=0; j<=i ; j++)
             {
                 double excessWater = max(0.0 , water[i][j] - 1.0 ) ;
                  water[i][j]-= excessWater ;
                  water[i+1][j] += excessWater/(2.0) ;
                  water[i+1][j+1] += excessWater/(2.0) ;
             }
        }
        
        for(int i=0; i<= query_row ; i++)
        {
            for(int j=0; j<=i ; j++)
                cout<<water[i][j]<<" ";
            cout<<endl;
        }
        
        return water[query_row][query_glass] ;
    }
};