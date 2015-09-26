setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, BEAMS_01_C_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, BEAMS_01_C_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, BEAMS_01_C_POSITION[0],                   
                          BEAMS_01_C_POSITION[1],                   
                          BEAMS_01_C_POSITION[2]);                  

    Rotate(modelWorld,    BEAMS_01_C_ROTATE[0],                     
                          BEAMS_01_C_ROTATE[1],                     
                          BEAMS_01_C_ROTATE[2],                     
                          BEAMS_01_C_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, BEAMS_01_C_ROTATE[0],                     
                          BEAMS_01_C_ROTATE[1],                     
                          BEAMS_01_C_ROTATE[2],                     
                          BEAMS_01_C_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, BEAMS_01_C_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, BEAMS_01_C_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 1260, GL_UNSIGNED_INT, 0);           

