//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC9Reminders25TTRIAccountsListsDragItem.h"

#import "NSItemProviderReading-Protocol.h"

@interface _TtC9Reminders25TTRIAccountsListsDragItem (Reminders) <NSItemProviderReading>
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@end

