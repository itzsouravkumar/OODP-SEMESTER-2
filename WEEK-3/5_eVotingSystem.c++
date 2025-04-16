#include<iostream>
using namespace std;

class votingSystem {
    private:
        string name;
        int age;
        string voterID;
        string address;
        bool hasVoted;
    public:
        void registerVoter(string name, int age, string voterID, string address) {
            this->name = name;
            this->age = age;
            this->voterID = voterID;
            this->address = address;
            this->hasVoted = false;
        }

        void castVote() {
            if (hasVoted) {
                cout << "You have already voted!" << endl;
            } else {
                cout << "Vote casted successfully!" << endl;
                hasVoted = true;
            }
        }

        void displayVoterInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Voter ID: " << voterID << endl;
            cout << "Address: " << address << endl;
            cout << "Has Voted: " << (hasVoted ? "Yes" : "No") << endl;
            cout << endl;
        }

        static int totalVoters;
};

class candidate {
    private:
        string name;
        string party;
        string candidateID;
        int votes;
    public:
        void registerCandidate(string name, string party, string candidateID) {
            this->name = name;
            this->party = party;
            this->candidateID = candidateID;
            this->votes = 0;
        }

        void castVote() {
            votes++;
        }

        void displayCandidateInfo() {
            cout << "Name: " << name << endl;
            cout << "Party: " << party << endl;
            cout << "Candidate ID: " << candidateID << endl;
            cout << "Votes: " << votes << endl;
            cout << endl;
        }

        static int totalCandidates;
};

int votingSystem::totalVoters = 0;
int candidate::totalCandidates = 0;

int main() {
    votingSystem voter1;
    voter1.registerVoter("Ayush", 20, "V123", "Patna");
    votingSystem::totalVoters++;
    voter1.displayVoterInfo();

    votingSystem voter2;
    voter2.registerVoter("Rahul", 21, "V124", "Delhi");
    votingSystem::totalVoters++;
    voter2.displayVoterInfo();

    votingSystem voter3;
    voter3.registerVoter("Rohit", 22, "V125", "Mumbai");
    votingSystem::totalVoters++;
    voter3.displayVoterInfo();

    cout << "Total Voters: " << votingSystem::totalVoters << endl;

    candidate candidate1;
    candidate1.registerCandidate("Narendra Modi", "BJP", "C123");
    candidate::totalCandidates++;
    candidate1.displayCandidateInfo();

    candidate candidate2;
    candidate2.registerCandidate("Rahul Gandhi", "Congress", "C124");
    candidate::totalCandidates++;
    candidate2.displayCandidateInfo();

    cout << "Total Candidates: " << candidate::totalCandidates << endl;

    voter1.castVote();
    voter2.castVote();
    voter3.castVote();
    candidate1.castVote();
    candidate2.castVote();

    cout << "------Voter Details------" << endl;
    voter1.displayVoterInfo();
    voter2.displayVoterInfo();
    voter3.displayVoterInfo();
    cout << "------Candidate Details------" << endl;
    candidate1.displayCandidateInfo();
    candidate2.displayCandidateInfo();
    
    return 0;
}