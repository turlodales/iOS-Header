//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSObject;

@interface FRCollectionView : UICollectionView
{
    unsigned long long _mode;
    NSObject *__accessibilityFocusedIdentifierForRestoringAfterReload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *_accessibilityFocusedIdentifierForRestoringAfterReload; // @synthesize _accessibilityFocusedIdentifierForRestoringAfterReload=__accessibilityFocusedIdentifierForRestoringAfterReload;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (long long)accessibilityContainerType;
- (void)_accessibilityRestoreFocusedElementIfApplicable;
- (void)_accessibilitySaveFocusedElementIfApplicable;
- (void)reloadData;

@end

