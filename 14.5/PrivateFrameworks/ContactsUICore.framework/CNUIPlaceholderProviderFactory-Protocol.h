//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@protocol CNUIPRLikenessProvider;

@protocol CNUIPlaceholderProviderFactory <NSObject>
- (id <CNUIPRLikenessProvider>)loadingGroupPlaceholderProviderWithBackgroundStyle:(unsigned long long)arg1;
- (id <CNUIPRLikenessProvider>)loadingPlaceholderProvider;
- (id <CNUIPRLikenessProvider>)placeholderProvider;
@end

