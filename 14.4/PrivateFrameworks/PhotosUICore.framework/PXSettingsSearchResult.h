//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PXSettingsIndexEntry;

@interface PXSettingsSearchResult : NSObject
{
    _PXSettingsIndexEntry *_entry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _PXSettingsIndexEntry *entry; // @synthesize entry=_entry;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)_initWithEntry:(id)arg1;
- (id)init;

@end

