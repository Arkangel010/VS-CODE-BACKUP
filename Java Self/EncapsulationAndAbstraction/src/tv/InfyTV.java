package tv;

public class InfyTV {
	private String photographer;
	private String newReporter;
	private String correspondent;
	public String getPhotographer() {
		return photographer;
	}
	public void setPhotographer(String photographer) {
		this.photographer = photographer;
	}
	public String getNewReporter() {
		return newReporter;
	}
	public void setNewReporter(String newReporter) {
		this.newReporter = newReporter;
	}
	public String getCorrespondent() {
		return correspondent;
	}
	public void setCorrespondent(String correspondent) {
		this.correspondent = correspondent;
	}
	
	void documentaryFilm() {
		System.out.println("A hundred years ago there were 100,000 tigers in the world. Today there are as few as 3,200. Why are tigers disappearing?......");
		System.out.println("by Correspondent:"+correspondent);
		System.out.println("Photographer: " + photographer);
		System.out.println("newsReporter: "+newReporter);
	}

}
