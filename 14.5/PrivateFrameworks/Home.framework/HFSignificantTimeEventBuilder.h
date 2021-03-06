//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFEventBuilder.h>

#import <Home/HFTimeEventBuilder-Protocol.h>

@class NSDateComponents, NSString;

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder>
{
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
@property(readonly, copy) NSString *description;
- (id)performValidation;
- (id)naturalLanguageWithOptions:(id)arg1 recurrences:(id)arg2;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)buildNewEventFromCurrentState;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

