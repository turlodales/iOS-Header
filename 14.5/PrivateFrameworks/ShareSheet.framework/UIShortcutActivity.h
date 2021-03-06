//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class NSArray, NSNumber, NSString, UIImage;

@interface UIShortcutActivity : UIApplicationExtensionActivity
{
    NSString *_identifier;
    NSNumber *_sortValue;
    UIImage *_iconImage;
    NSString *_singleUseToken;
    NSString *_name;
    NSArray *_photosAssetIdentifiers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *photosAssetIdentifiers; // @synthesize photosAssetIdentifiers=_photosAssetIdentifiers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *singleUseToken; // @synthesize singleUseToken=_singleUseToken;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSNumber *sortValue; // @synthesize sortValue=_sortValue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (id)activityTitle;
- (id)activityType;
- (id)_actionImage;
- (long long)_defaultSortGroup;
- (id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3;
- (id)initPartialShortcutWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3 sortValue:(id)arg4;
- (id)initWithPartial:(id)arg1;

@end

