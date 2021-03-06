//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSMutableData, NSString, NSURLSessionDataTask;

@interface COSInternalUserStudyAssetManager : NSObject <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSMutableData *_data;
    CDUnknownBlockType _videoAssetWithCompletion;
    NSURLSessionDataTask *_uploadTask;
}

+ (void)clearVideoFile;
+ (id)keyIdentifier;
+ (id)URLString;
+ (id)bucketName;
+ (id)userName;
+ (id)path;
+ (id)filePath;
+ (id)beamBridgeDetailInfo;
+ (id)detailBundle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDataTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(copy, nonatomic) CDUnknownBlockType videoAssetWithCompletion; // @synthesize videoAssetWithCompletion=_videoAssetWithCompletion;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void)uploadData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_completeStream;
- (void)_reportAssetLoaded;
- (void)requestDataForVideoAssetWithCompletion:(CDUnknownBlockType)arg1;
- (id)metadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

