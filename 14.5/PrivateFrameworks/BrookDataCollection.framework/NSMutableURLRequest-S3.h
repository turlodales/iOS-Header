//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (S3)
- (void)s3_setS3HeadersWithContent:(id)arg1 accessConfig:(id)arg2;
- (id)s3_encryptPlaintext:(id)arg1;
- (id)s3_decryptAESWithCiphertext:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (_Bool)s3_encryptAESWithPlaintext:(id)arg1 ciphertext:(id *)arg2 key:(id *)arg3 iv:(id *)arg4;
- (id)_secureRandomOfLength:(unsigned long long)arg1;
- (id)AWSStringToSignWithHTTPVerb:(id)arg1 contentMD5:(id)arg2 contentType:(id)arg3 date:(id)arg4 canonicalizedResource:(id)arg5;
- (id)AWSCanonicalizedResourceWithBucket:(id)arg1 FileName:(id)arg2;
- (id)_formatHTTPDate:(id)arg1;
@end

