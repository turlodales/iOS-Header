//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/ISStoreURLOperationDelegate-Protocol.h>
#import <ITMLKit/NSURLConnectionDataDelegate-Protocol.h>

@class IKAppContext, JSManagedValue, NSArray, NSMutableArray, NSNumber, NSString;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate>
{
    _Bool _isJingleRequest;
    NSArray *_scripts;
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    NSMutableArray *_records;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) JSManagedValue *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *scripts; // @synthesize scripts=_scripts;
@property(nonatomic) _Bool isJingleRequest; // @synthesize isJingleRequest=_isJingleRequest;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(_Bool)arg3;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)evaluateScripts;
- (void)handleScirptLoadFailure;
- (void)scriptDidLoadWithID:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)parseScriptData:(id)arg1 successPredicate:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)evaluate;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

