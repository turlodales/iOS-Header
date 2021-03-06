//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleModel;
@protocol WFComponentNavigationContext;

@interface WFModuleHeadingComponent : CKCompositeComponent
{
    WFModuleModel *_model;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithModel:(id)arg1 navigationContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) WFModuleModel *model; // @synthesize model=_model;
- (void)removeButtonTapped:(id)arg1;
- (void)settingsButtonTapped;
- (void)titleComponentTapped:(id)arg1;

@end

