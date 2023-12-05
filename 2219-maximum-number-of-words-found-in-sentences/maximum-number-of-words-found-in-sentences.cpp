class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ml=0, i=0;
        while(i<sentences.size()){
            int l=0;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j]==' '){
                    l++;
                }
            }
            l+=1;
            ml=max(ml,l);
            i++;
        }
        return ml;
    }
};