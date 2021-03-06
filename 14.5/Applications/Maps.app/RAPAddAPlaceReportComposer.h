//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPAddAPlaceTypeSelectionViewControllerDelegate-Protocol.h"

@class RAPAddNewPlaceQuestion, RAPReport, UIViewController;

__attribute__((visibility("hidden")))
@interface RAPAddAPlaceReportComposer : NSObject <RAPAddAPlaceTypeSelectionViewControllerDelegate>
{
    RAPAddNewPlaceQuestion *_question;
    RAPReport *_report;
    CDUnknownBlockType _completion;
    long long _presentationStyle;
    UIViewController *_initialViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) RAPReport *report; // @synthesize report=_report;
@property(retain, nonatomic) RAPAddNewPlaceQuestion *question; // @synthesize question=_question;
- (void)clearCategorySelection;
- (void)setCategoryNames:(id)arg1;
- (void)clearPhotoSelection;
- (void)addAPlaceTypeSelectionViewControllerDidSelectPoi:(id)arg1;
- (void)addAPlaceTypeSelectionViewController:(id)arg1 didSelectCoordinateWithSender:(id)arg2;
- (id)_placeCorrectionsViewController;
- (id)typeSelectionViewController;
- (void)didTapOnCancel;
- (id)initWithReport:(id)arg1 question:(id)arg2 presentationStyle:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

