//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBShortcutOverview;

@protocol _INPBListShortcutsIntentResponse <NSObject>
+ (Class)shortcutsType;
@property(readonly, nonatomic) unsigned long long shortcutsCount;
@property(copy, nonatomic) NSArray *shortcuts;
- (_INPBShortcutOverview *)shortcutsAtIndex:(unsigned long long)arg1;
- (void)addShortcuts:(_INPBShortcutOverview *)arg1;
- (void)clearShortcuts;
@end

