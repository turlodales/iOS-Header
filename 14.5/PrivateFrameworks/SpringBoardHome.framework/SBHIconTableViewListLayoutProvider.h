//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class SBHIconTableViewListLayout;
@protocol SBIconListLayoutProvider;

@interface SBHIconTableViewListLayoutProvider : NSObject <SBIconListLayoutProvider>
{
    SBHIconTableViewListLayout *_listLayout;
    id <SBIconListLayoutProvider> _defaultListLayoutProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SBIconListLayoutProvider> defaultListLayoutProvider; // @synthesize defaultListLayoutProvider=_defaultListLayoutProvider;
- (id)layoutForIconLocation:(id)arg1;
- (id)init;
- (id)initWithDefaultListLayoutProvider:(id)arg1;

@end

