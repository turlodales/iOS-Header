//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>

#import <MapsSuggestions/MapsSuggestionsFirstUnlockProtocol-Protocol.h>

@class NSString;

@interface MapsSuggestionsFirstUnlockBase : MapsSuggestionsBaseTrigger <MapsSuggestionsFirstUnlockProtocol>
{
}

- (void)triggerFired:(id)arg1;
- (_Bool)shouldRun;
- (id)objectForJSON;
@property(readonly, nonatomic) NSString *uniqueName;
- (_Bool)hasDeviceBeenUnlocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

