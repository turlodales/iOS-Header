//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPEvent;

__attribute__((visibility("hidden")))
@interface LPFetcher : NSObject
{
    unsigned int _loggingID;
    LPEvent *_event;
    id _userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(retain, nonatomic) LPEvent *_event; // @synthesize _event;
@property(readonly, nonatomic) unsigned int _loggingID; // @synthesize _loggingID;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

