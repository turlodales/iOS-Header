//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPTablePartSection.h"

@class RAPBadRouteSuggestionsQuestion;

__attribute__((visibility("hidden")))
@interface RAPReportComposerBadRouteSelectionSection : RAPTablePartSection
{
    RAPBadRouteSuggestionsQuestion *_question;
    _Bool _collapsed;
    CDUnknownBlockType _willChangeQuestionRequiringNoScroll;
}

- (void).cxx_destruct;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (void)_noteWillSelectWithoutScroll;
- (id)cellForRowAtIndex:(long long)arg1;
- (struct UIEdgeInsets)_separatorInset;
- (unsigned long long)_selectableRouteSuggestionIndexForCellIndex:(long long)arg1;
- (_Bool)_isExpansionCellIndex:(long long)arg1;
- (long long)_expansionCellIndex;
- (_Bool)_isNoGoodCellIndex:(long long)arg1;
- (long long)rowsCount;
- (id)initWithQuestion:(id)arg1 willChangeQuestionRequiringNoScroll:(CDUnknownBlockType)arg2;

@end

