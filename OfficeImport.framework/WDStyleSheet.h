/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, WDStyle, NSMutableArray, WDDocument, WDParagraphProperties, WDCharacterProperties;

@interface WDStyleSheet : NSObject  {
    NSMutableDictionary *mStyleDictionary;
    WDDocument *mDocument;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}


- (int)styleCount;
- (id)styleIdFromStyleName:(id)arg1;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (void)removeStyleWithId:(id)arg1;
- (void)initializeDefaultProperties;
- (id)styleIdForName:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (void)setName:(id)arg1 forId:(id)arg2;
- (id)defaultCharacterStyle;
- (id)defaultParagraphProperties;
- (id)defaultListStyle;
- (void)createDefaultStyles;
- (id)defaultParagraphStyle;
- (id)defaultCharacterProperties;
- (id)styleNameToId:(id)arg1;
- (id)styleWithId:(id)arg1;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (void)setDefaultParagraphStyle:(id)arg1;
- (void)setDefaultCharacterStyle:(id)arg1;
- (void)setDefaultListStyle:(id)arg1;
- (void)addStyle:(id)arg1 name:(id)arg2;
- (id)styles;
- (id)defaultTableStyle;
- (void)setDefaultTableStyle:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)dealloc;

@end
