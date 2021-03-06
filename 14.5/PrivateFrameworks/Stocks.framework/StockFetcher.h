//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SymbolValidatorDelegate-Protocol.h>

@class NSString, NSTimer, SymbolValidator;

@interface StockFetcher : NSObject <SymbolValidatorDelegate>
{
    double _timeoutDuration;
    SymbolValidator *_validator;
    CDUnknownBlockType _completionHandler;
    NSTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) SymbolValidator *validator; // @synthesize validator=_validator;
@property double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;
- (void)cleanUpAndReportResult:(id)arg1;
- (void)remoteFetchTimedOut;
- (void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchStockWithSymbol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithValidator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

