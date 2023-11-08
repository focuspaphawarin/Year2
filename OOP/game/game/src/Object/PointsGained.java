package Object;

public class PointsGained {
    private int totalPoints;

    public PointsGained() {
        totalPoints = 0;
    }

    public void increasePoints(int points) {
        totalPoints += points;
    }

    public void resetPoints() {
        totalPoints = 0;
    }

    public int getTotalPoints() {
        return totalPoints;
    }
}
