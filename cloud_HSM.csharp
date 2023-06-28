using Amazon.CloudHSM;
using Amazon.CloudHSM.Model;

public class CreateHsm
{
    public static void Main(string[] args)
    {
        var client = new CloudHSMClient();

        var request = new CreateHsmRequest
        {
            ClusterId = "my-cluster-id"
        };

        var response = client.CreateHsm(request);

        Console.WriteLine("HSM created: " + response.HsmId);
    }
}
