    if(BEAMS_01_C_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &BEAMS_01_C_NORMALMAP);    
        BEAMS_01_C_NORMALMAP = 0;                      
    }                                                              
    if(BEAMS_01_C_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &BEAMS_01_C_TEXTUREMAP);   
        BEAMS_01_C_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(BEAMS_01_C_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &BEAMS_01_C_VBO);           
        BEAMS_01_C_VBO  = 0;                           
    }                                                              
    if(BEAMS_01_C_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &BEAMS_01_C_INDICES_VBO);   
        BEAMS_01_C_INDICES_VBO  = 0;                   
    }                                                              
