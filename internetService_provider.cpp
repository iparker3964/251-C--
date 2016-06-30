// This program displays a menu and calculates a customer's monthly bill
// Author: Isaiah Parker
/**
 *
 * @author Isaiah
 */
public abstract class MediaItem implements Comparable<MediaItem> {
    protected String mediaName;
    protected int mediaYear;
    protected String mediaTitle;
    
    @Override
public abstract int compareTo(MediaItem other);

    
    //create
    public MediaItem(String name, int year,String title)
    {
        this.mediaName = name;
        this.mediaYear = year;
        this.mediaTitle = title;
    }
    
    //get
    public String getName()
    {
        return this.mediaName;
    }
    public int getYear()
    {
        return this.getYear();
    }
    public String getTitle()
    {
        return this.mediaTitle;
    }
    
    //set
    public void setName(String name)
    {
        this.mediaName = name;
    }
    public void setYear(int year)
    {
        this.mediaYear = year;
    }
    public void setTitle(String title)
    {
        this.mediaTitle = title;
    }
    
    
    //abs
    public abstract String mediaType();
    
    //print 
    @Override
    
    public String toString()
    {
        
        if (this.mediaType().compareTo("Album") ==0)
           return "Artist Name:\t"+this.mediaName +"\nYear:\t\t"+ this.mediaYear +"\nTitle:\t\t"+ this.mediaTitle + "\nType:\t\t" + this.mediaType()+ "\n\n"  ;
        else return "Media Name:\t"+this.mediaName +"\nYear:\t\t"+ this.mediaYear +"\nMedia Type:\t"+ this.mediaTitle + "\nType:\t\t" + this.mediaType()+ "\n\n"  ;
    }

  /*  @Override
    
    public int compareTo(album myAlb) {
      //  throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
       if (myAlb.getClass().equals(this.getClass()))
       {
           return this.mediaName.compareTo(myAlb.mediaName);
           //return 1;
       }
           //return 1;
       else 
           return -1;
        //if (this.getName().compareTo(mediaName) >1)
          //  return 1;
        //else if (this.getName().compareTo(mediaName)<1)
          //  return -1;
        //else
          //  return 0;
    }
    */
    

    
}
