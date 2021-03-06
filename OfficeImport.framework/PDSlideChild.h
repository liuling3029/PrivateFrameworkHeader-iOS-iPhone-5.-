/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADThemeOverrides;

@interface PDSlideChild : PDSlideBase  {
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}


- (BOOL)showMasterPlaceholderAnimations;
- (void)setShowMasterPlaceholderAnimations:(BOOL)arg1;
- (BOOL)showMasterShapes;
- (void)setShowMasterShapes:(BOOL)arg1;
- (void)setColorMapOverride:(id)arg1;
- (id)themeOverrides;
- (id)colorMapOverride;
- (id)colorMap;
- (id)drawingTheme;
- (id)colorScheme;
- (id)fontScheme;
- (id)styleMatrix;
- (void)doneWithContent;
- (id)init;
- (void)dealloc;

@end
