//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject
{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_requests;
}

+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;
+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (_Bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;

@end

