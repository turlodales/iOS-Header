//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICommand.h>

@class UICommandAlternate;

__attribute__((visibility("hidden")))
@interface _UIValidatableCommand : UICommand
{
    UICommand *_command;
    UICommandAlternate *_alternate;
}

- (void).cxx_destruct;
- (void)useCommand:(id)arg1 alternate:(id)arg2;
- (id)init;
- (id)alternates;
- (id)propertyList;
- (SEL)action;

@end

