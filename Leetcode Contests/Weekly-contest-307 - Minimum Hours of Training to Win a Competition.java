class Solution {
    
    private boolean minExp(int ex, int[] experience){
        int n = experience.length;
        for(int i=0;i<n;i++){
            if(ex<=experience[i]){
                return false;
            }
            ex += experience[i];
        }
        return true;
    }
    
    private boolean minEnergy(int en, int[] energy){
        int n = energy.length;
        for(int i=0;i<n;i++){
            if(en<=energy[i]){
                return false;
            }
            en -= energy[i];
        }
        return true;
    }
    
    public int minNumberOfHours(int initialEnergy, int initialExperience,int[] energy, int[] experience) {
        int ener = 0;
        int exp = 0;
        int ans = 0;
        for(int en = 0;en<12000;en++){
            if(minEnergy(initialEnergy+en, energy)){
                ans += en;
                break;
            }
        }
        for(int en = 0;en<12000;en++){
            if(minExp(initialExperience+en, experience)){
                ans += en;
                break;
            }
        }
        return ans;
    }
}
