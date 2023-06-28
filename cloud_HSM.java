import com.amazonaws.services.cloudhsm.AWSCloudHSMClient;
import com.amazonaws.services.cloudhsm.model.CreateHsmRequest;
import com.amazonaws.services.cloudhsm.model.CreateHsmResult;

public class CreateHsm {

    public static void main(String[] args) {
        AWSCloudHSMClient client = new AWSCloudHSMClient();

        CreateHsmRequest request = new CreateHsmRequest();
        request.setClusterId("my-cluster-id");

        CreateHsmResult result = client.createHsm(request);

        System.out.println("HSM created: " + result.getHsmId());
    }
}
