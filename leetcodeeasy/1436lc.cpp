// class Solution {
// public:
//     string destCity(vector<vector<string>>& paths) {
//         map<string, int > rand;
//         for(auto &path : paths){
//             string source =path[0];
//             rand[source] =1;

//         }

//         for(auto &path: paths){
//             string dest = path[1];
//             if(rand[dest] != 1){
//                 return dest;
//             }
//         }
//         return "";
//     }
// };