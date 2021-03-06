//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPMenuItem-Protocol.h"

@class MapsSuggestionsShortcut, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface RAPPersonalPlaceSelectionQuestion : RAPQuestion <RAPMenuItem>
{
    MapsSuggestionsShortcut *_shortcut;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MapsSuggestionsShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
- (void)_fillSubmissionParameters:(id)arg1;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 shortcut:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
@property(readonly) Class superclass;

@end

