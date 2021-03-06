//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEEncrypted : NSObject
{
}

+ (_Bool)decryptAllFrom:(id)arg1 to:(id)arg2;
+ (id)decryptAll:(id)arg1;
+ (id)toEnvelope:(_Bool)arg1 iv:(id)arg2 hmac:(id)arg3 keyVersion:(id)arg4 payload:(id)arg5;
+ (id)versionFile:(id)arg1;
+ (_Bool)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 multipart:(_Bool)arg5;
+ (_Bool)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3;
+ (_Bool)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 allowAllKeys:(_Bool)arg4;
+ (id)decryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3;
+ (id)encryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 keyId:(unsigned long long)arg4 privateKey:(id)arg5 multipart:(_Bool)arg6;
+ (id)encrypt:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3 multipart:(_Bool)arg4;
+ (_Bool)wrapFrom:(id)arg1 to:(id)arg2 encryptedPb:(struct Encrypted *)arg3 multipart:(_Bool)arg4;
+ (_Bool)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 encryptedPb:(struct Encrypted *)arg5;
+ (id)decrypt:(id)arg1;
+ (id)decrypt:(id)arg1 keyVersion:(id *)arg2;
+ (id)decrypt:(id)arg1 allowAllKeys:(_Bool)arg2 keyVersion:(id *)arg3;
+ (_Bool)decryptFrom:(id)arg1 to:(id)arg2 allowAllKeys:(_Bool)arg3 keyVersion:(id *)arg4;
+ (id)getSymmetricKey:(id)arg1 publicKey:(id)arg2 symmetricKeyIV:(id *)arg3 signature:(id *)arg4;
+ (id)getSymmetricKey:(id)arg1 symmetricKeyIV:(id)arg2 signature:(id)arg3;
+ (id)getSymmetricSrc:(id)arg1 publicKey:(id)arg2;
+ (id)getKeyWithVersion:(id)arg1;
+ (id)getKeyWithVersion:(id)arg1 symmetric:(_Bool *)arg2;
+ (_Bool)isPrivateKey:(id)arg1 publicKey:(id)arg2;
+ (_Bool)isSymmetric:(unsigned long long)arg1;
+ (id)getKey:(unsigned long long)arg1;

@end

