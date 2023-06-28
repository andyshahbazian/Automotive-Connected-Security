import boto3

def create_hsm():
    client = boto3.client('cloudhsm')

    request = {
        'ClusterId': 'my-cluster-id',
    }

    response = client.create_hsm(**request)

    print(response['HsmId'])

if __name__ == '__main__':
    create_hsm()
