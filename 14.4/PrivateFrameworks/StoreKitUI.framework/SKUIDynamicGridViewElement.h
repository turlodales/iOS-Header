//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGridViewElement.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElement : SKUIGridViewElement
{
    _Bool _hasValidTemplateDefinitionMap;
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;
    long long _minimumEntityCountForSections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long minimumEntityCountForSections; // @synthesize minimumEntityCountForSections=_minimumEntityCountForSections;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)_templateDefinitionTypeToModeValueMap;
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;
@property(readonly, nonatomic, getter=isMalformed) _Bool malformed;
@property(readonly, nonatomic) _Bool hasSectionHeaders;
- (_Bool)allowsMultipleSelectionDuringEditing;
- (long long)pageComponentType;
- (_Bool)isDynamicContainer;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

