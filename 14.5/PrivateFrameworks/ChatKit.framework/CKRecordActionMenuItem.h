//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface CKRecordActionMenuItem : CKActionMenuItem
{
    _Bool _wasSelected;
    NSDate *_dateSelected;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *dateSelected; // @synthesize dateSelected=_dateSelected;
@property(nonatomic) _Bool wasSelected; // @synthesize wasSelected=_wasSelected;
- (void)updateForState:(long long)arg1 touchInside:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

