//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKQuery.h>

#import <PencilKit/CHQueryDelegate-Protocol.h>

@class CHDataDetectorQuery, NSString;

@interface PKDataDetectorQuery : PKQuery <CHQueryDelegate>
{
    CHDataDetectorQuery *_dataDetectorQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CHDataDetectorQuery *dataDetectorQuery; // @synthesize dataDetectorQuery=_dataDetectorQuery;
- (void)queryDidUpdateResult:(id)arg1;
- (void)dealloc;
- (void)teardown;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSessionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

