//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCBReader.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EBReader : OCBReader
{
    NSString *mTemporaryDirectory;
    struct XlObjectFactory *mXlObjectFactory;
    _Bool mUseStringOptimization;
    _Bool mIsFileStructuredStorage;
    const void *mBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFileStructuredStorage; // @synthesize isFileStructuredStorage=mIsFileStructuredStorage;
@property(nonatomic) _Bool useStringOptimization; // @synthesize useStringOptimization=mUseStringOptimization;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
@property(readonly, nonatomic) struct XlBinaryReader *xlReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (id)read;
- (_Bool)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end

