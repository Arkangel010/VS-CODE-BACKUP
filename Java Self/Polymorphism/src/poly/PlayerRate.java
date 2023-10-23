package poly;

public class PlayerRate {
	private int playerposition;

	public int getPlayerposition() {
		return playerposition;
	}

	public void setPlayerposition(int playerposition) {
		this.playerposition = playerposition;
	}

	private String playerName;

	public String getPlayerName() {
		return playerName;
	}

	public void setPlayerName(String playerName) {
		this.playerName = playerName;
	}

	private float criticOneRating;

	public float getCriticOneRating() {
		return criticOneRating;
	}

	public void setCriticOneRating(float criticOneRating) {
		this.criticOneRating = criticOneRating;
	}

	private float criticTwoRating;

	public float getCriticTwoRating() {
		return criticTwoRating;
	}

	public void setCriticTwoRating(float criticTwoRating) {
		this.criticTwoRating = criticTwoRating;
	}

	private float criticThreeRating;

	public float getCriticThreeRating() {
		return criticThreeRating;
	}

	public void setCriticThreeRating(float criticThreeRating) {
		this.criticThreeRating = criticThreeRating;
	}

	private float averageRating;

	public float getAverageRating() {
		return averageRating;
	}

	public void setAverageRating(float averageRating) {
		this.averageRating = averageRating;
	}

	private char category;

	public char getCategory() {
		return category;
	}

	public void setCategory(char category) {
		this.category = category;
	}

	void PlayerRating(int playerposition, String playerName) {
		this.playerposition = playerposition;
		this.playerName = playerName;
	}

	void calculateAverageRating(float criticOneRating, float criticTwoRating) {
		this.criticOneRating = criticOneRating;
		this.criticTwoRating = criticTwoRating;
		averageRating = (criticOneRating + criticTwoRating) / 2;
	}

	void calculateAverageRating(float criticOneRating, float criticTwoRating, float criticThreeRating) {
		this.averageRating = (criticOneRating + criticTwoRating + criticThreeRating) / 3;

	}

	void calculateCategory() {
		if (averageRating > 8) {
			this.category = 'A';
		} else if (averageRating > 5 && averageRating <= 8) {
			this.category = 'B';
		} else if (averageRating > 0 && averageRating <= 5) {
			this.category = 'c';
		} else {

		}

	}

	void display() {
		System.out.println(playerposition);
		System.out.println(playerName);
		System.out.println(averageRating);
		System.out.println(category);

	}

	public static void main(String[] args) {
		PlayerRate player = new PlayerRate();
		player.calculateAverageRating(9, (float) 9.9);
		player.PlayerRating(1, "Aman");
		player.calculateCategory();
		System.out.println("Player name is " + player.getPlayerName());
		System.out.println("Player Position is :" + player.getPlayerposition());
		System.out.println("Player Average Rating is " + player.averageRating);
		System.out.println("Player catgory is " + player.getCategory() + "\n");
		player.PlayerRating(1, "oscar");
		player.calculateAverageRating(1, 1, 1);
		player.calculateCategory();
		System.out.println("Player name is " + player.getPlayerName());
		System.out.println("Player Position is " + player.getPlayerposition());
		System.out.println("Player Average Rating is " + player.averageRating);
		System.out.println("Player catgory is " + player.getCategory());

	}

}
