//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : NSObject
{
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id *)arg2 tempDirectory:(id *)arg3;
+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)agileDescriptorNamespace;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (_Bool)decryptIntoOutputFile;
- (_Bool)verifyPassphrase:(id)arg1;
- (_Bool)decrypt;
- (void)deleteOutputFile;
- (_Bool)isReadProtectedUsingDefaultPassphrase;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (void)dealloc;

@end

